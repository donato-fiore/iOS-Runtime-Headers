// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDLINEFACTORY_H
#define CNVCARDLINEFACTORY_H

@class NSString;
@protocol CNVCardLineFactory;

#import <Foundation/Foundation.h>


@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)version21LineFactory;
+(id)version30LineFactory;
-(id)arrayLineWithName:(id)arg0 value:(id)arg1 ;
-(id)arrayLineWithName:(id)arg0 value:(id)arg1 itemSeparator:(id)arg2 ;
-(id)dataLineWithName:(id)arg0 value:(id)arg1 ;
-(id)lineWithLiteralValue:(id)arg0 ;
-(id)stringLineWithName:(id)arg0 value:(id)arg1 ;
-(id)versionPlaceholderLine;


@end


#endif
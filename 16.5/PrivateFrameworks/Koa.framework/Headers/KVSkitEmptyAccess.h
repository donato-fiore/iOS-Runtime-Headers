// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSKITEMPTYACCESS_H
#define KVSKITEMPTYACCESS_H

@class NSString;
@protocol KVSkitReadAccess;

#import <Foundation/Foundation.h>


@interface KVSkitEmptyAccess : NSObject <KVSkitReadAccess>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)indexLocale;
-(id)matchSpans:(id)arg0 error:(*id)arg1 ;
-(void)prewarm;


@end


#endif
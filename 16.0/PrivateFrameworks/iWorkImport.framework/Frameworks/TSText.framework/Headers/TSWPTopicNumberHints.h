// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTOPICNUMBERHINTS_H
#define TSWPTOPICNUMBERHINTS_H

@class NSString, NSMapTable;
@protocol TSWPTopicNumberHints;

#import <Foundation/Foundation.h>


@interface TSWPTopicNumberHints : NSObject <TSWPTopicNumberHints>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMapTable *entryForListStyle; // ivar: _entryForListStyle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
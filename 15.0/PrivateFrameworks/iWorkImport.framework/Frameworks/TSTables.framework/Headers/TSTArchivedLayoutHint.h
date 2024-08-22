// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTARCHIVEDLAYOUTHINT_H
#define TSTARCHIVEDLAYOUTHINT_H

@class TSPObject, NSString;
@protocol TSDArchivedHint;


#import "TSTLayoutHint.h"

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSTLayoutHint *hint; // ivar: mHint
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 hint:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADHYPERLINK_H
#define OADHYPERLINK_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface OADHyperlink : NSObject {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
}


@property (nonatomic) BOOL doAddToHistory; // ivar: mDoAddToHistory
@property (nonatomic) BOOL doEndSound; // ivar: mDoEndSound
@property (nonatomic) BOOL isVisited; // ivar: mIsVisited


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)action;
-(id)description;
-(id)init;
-(id)invalidUrl;
-(id)targetFrame;
-(id)targetLocation;
-(id)tooltip;
-(int)targetMode;
-(void)setAction:(id)arg0 ;
-(void)setInvalidUrl:(id)arg0 ;
-(void)setTargetFrame:(id)arg0 ;
-(void)setTargetLocation:(id)arg0 ;
-(void)setTargetMode:(int)arg0 ;
-(void)setTooltip:(id)arg0 ;


@end


#endif
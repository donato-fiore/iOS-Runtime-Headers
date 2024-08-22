// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ALGOSCONNECTIONSCORE_H
#define ALGOSCONNECTIONSCORE_H


#import <Foundation/Foundation.h>


@interface AlgosConnectionScore : NSObject {
    *void connectionData;
}


@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) BOOL debug; // ivar: _debug


+(id)connectionScore;
-(id)init;
-(id)scoreConnection:(BOOL)arg0 label:(id)arg1 ;
-(void)addConnectionRow:(NSUInteger)arg0 ttfb:(CGFloat)arg1 ttlb:(CGFloat)arg2 basettfb:(CGFloat)arg3 basettlb:(CGFloat)arg4 weight:(CGFloat)arg5 failed:(int)arg6 ;
-(void)clearConnectionRows;
-(void)dealloc;


@end


#endif
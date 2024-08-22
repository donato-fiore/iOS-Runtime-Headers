// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYPOWERLOGENTRY_H
#define SBDISPLAYPOWERLOGENTRY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBDisplayPowerLogEntry : NSObject <NSCopying>



@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) CGSize nativeSize; // ivar: _nativeSize
@property (nonatomic) NSUInteger windowingMode; // ivar: _windowingMode
@property (nonatomic) NSUInteger zoomLevel; // ivar: _zoomLevel


+(id)forDisplay:(id)arg0 mode:(NSUInteger)arg1 zoom:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)logPayload;


@end


#endif
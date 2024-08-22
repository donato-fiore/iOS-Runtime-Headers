// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUMOBILEDEVICE_H
#define CUMOBILEDEVICE_H

@class NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CUMobileDevice : NSObject <NSCopying>



@property (nonatomic) BOOL connected; // ivar: _connected
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *internalModel; // ivar: _internalModel
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL paired; // ivar: _paired
@property (nonatomic) BOOL placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *udid; // ivar: _udid
@property (copy, nonatomic) NSString *wifiAddress; // ivar: _wifiAddress


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif
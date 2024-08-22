// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLFINDMYACCESSORYFIRMWAREVERSION_H
#define CLFINDMYACCESSORYFIRMWAREVERSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryFirmwareVersion : NSObject {
    *? _version;
}


@property (readonly) NSUInteger calibrationDataVersion;
@property (readonly) NSUInteger hardwareVersion;
@property (readonly) NSUInteger roseAPVersion;
@property (readonly) NSUInteger roseDSPVersion;
@property (readonly) NSString *rtKitVersion;
@property (readonly) NSString *specificationVersion;
@property (readonly) NSString *vanBurenVersion;


-(id)description;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;


@end


#endif
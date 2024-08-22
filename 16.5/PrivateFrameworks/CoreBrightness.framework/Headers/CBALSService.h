// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBALSSERVICE_H
#define CBALSSERVICE_H

@class NSString;


#import "CBHIDService.h"

@interface CBALSService : CBHIDService {
    NSString *_desc;
}


@property (readonly) CGFloat CCT; // ivar: _CCT
@property (readonly) BOOL colorSupport; // ivar: _colorSupport
@property (readonly) NSUInteger location; // ivar: _location
@property (readonly) CGFloat lux; // ivar: _lux
@property (readonly) BOOL validData; // ivar: _validData
@property (readonly) CGFloat x; // ivar: _x
@property (readonly) CGFloat y; // ivar: _y


-(BOOL)updateEventData;
-(id)description;
-(id)initWithHIDALSServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(void)dealloc;
-(void)resetEventData;
-(void)setEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif
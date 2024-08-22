// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSERVICENAMECOMPONENTS_H
#define HMDSERVICENAMECOMPONENTS_H

@class HMFObject, NSString;



@interface HMDServiceNameComponents : HMFObject

@property (retain, nonatomic) NSString *format; // ivar: _format
@property (retain, nonatomic) NSString *rawServiceName; // ivar: _rawServiceName
@property (retain, nonatomic) NSString *roomName; // ivar: _roomName
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName


+(id)componentsWithRawServiceName:(id)arg0 rawRoomName:(id)arg1 ;
+(id)componentsWithRawServiceName:(id)arg0 rawRoomName:(id)arg1 localizedFormat:(id)arg2 ;
-(id)composedName;
-(id)initWithRawServiceName:(id)arg0 rawRoomName:(id)arg1 localizedFormat:(id)arg2 ;


@end


#endif
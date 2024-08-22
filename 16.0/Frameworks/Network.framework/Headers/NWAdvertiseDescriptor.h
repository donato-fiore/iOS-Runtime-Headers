// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWADVERTISEDESCRIPTOR_H
#define NWADVERTISEDESCRIPTOR_H

@class NSString, NSData;
@protocol OS_nw_advertise_descriptor;

#import <Foundation/Foundation.h>


@interface NWAdvertiseDescriptor : NSObject

@property (readonly, nonatomic) NSString *bonjourServiceDomain;
@property (readonly, nonatomic) NSString *bonjourServiceName;
@property (readonly, nonatomic) NSString *bonjourServiceType;
@property (retain, nonatomic) NSObject<OS_nw_advertise_descriptor> *internalDescriptor; // ivar: _internalDescriptor
@property (retain, nonatomic) NSData *txtRecord;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(id)arg1 domain:(id)arg2 ;
-(id)privateDescription;


@end


#endif
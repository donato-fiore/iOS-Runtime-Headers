// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNFILESERVERINFO_H
#define SNFILESERVERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNFileServerInfo : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *idsDeviceID; // ivar: _idsDeviceID
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithIdentifier:(id)arg0 idsDeviceID:(id)arg1 model:(id)arg2 name:(id)arg3 ;


@end


#endif
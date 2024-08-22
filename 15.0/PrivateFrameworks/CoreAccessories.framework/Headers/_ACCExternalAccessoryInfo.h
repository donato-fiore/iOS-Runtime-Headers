// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ACCEXTERNALACCESSORYINFO_H
#define _ACCEXTERNALACCESSORYINFO_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _ACCExternalAccessoryInfo : NSObject

@property NSUInteger destinationSharingOptions; // ivar: _destinationSharingOptions
@property (retain) NSString *firmwareRevisionActive; // ivar: _firmwareRevisionActive
@property (retain) NSString *firmwareRevisionPending; // ivar: _firmwareRevisionPending
@property (retain) NSDictionary *fullAccessoryInfo; // ivar: _fullAccessoryInfo
@property (retain) NSString *hardwareRevision; // ivar: _hardwareRevision
@property (retain) NSString *manufacturer; // ivar: _manufacturer
@property (retain) NSString *model; // ivar: _model
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *ppid; // ivar: _ppid
@property (retain) NSString *primaryUUID; // ivar: _primaryUUID
@property (retain) NSString *serial; // ivar: _serial


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyAccessoryInfo;
-(id)description;
-(id)initWithAccessoryInfoDictionary:(id)arg0 ;


@end


#endif
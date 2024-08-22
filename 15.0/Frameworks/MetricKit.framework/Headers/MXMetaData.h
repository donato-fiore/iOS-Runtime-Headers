// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXMETADATA_H
#define MXMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MXMetaData : NSObject <NSSecureCoding>



@property (retain) NSString *applicationBuildVersion; // ivar: _applicationBuildVersion
@property (retain) NSString *deviceType; // ivar: _deviceType
@property (retain) NSString *osVersion; // ivar: _osVersion
@property (retain) NSString *platformArchitecture; // ivar: _platformArchitecture
@property (retain) NSString *regionFormat; // ivar: _regionFormat


+(BOOL)supportsSecureCoding;
-(id)DictionaryRepresentation;
-(id)JSONRepresentation;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegionFormat:(id)arg0 osVersion:(id)arg1 deviceType:(id)arg2 appBuildVersion:(id)arg3 ;
-(id)initWithRegionFormat:(id)arg0 osVersion:(id)arg1 deviceType:(id)arg2 appBuildVersion:(id)arg3 platformArchitecture:(id)arg4 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
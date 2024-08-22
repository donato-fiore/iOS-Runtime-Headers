// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMRESOURCEATTRIBUTES_H
#define EDAMRESOURCEATTRIBUTES_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMLazyMap.h"

@interface EDAMResourceAttributes : FATObject

@property (retain, nonatomic) NSNumber *altitude; // ivar: _altitude
@property (retain, nonatomic) EDAMLazyMap *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSNumber *attachment; // ivar: _attachment
@property (retain, nonatomic) NSString *cameraMake; // ivar: _cameraMake
@property (retain, nonatomic) NSString *cameraModel; // ivar: _cameraModel
@property (retain, nonatomic) NSNumber *clientWillIndex; // ivar: _clientWillIndex
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *recoType; // ivar: _recoType
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp


+(id)structFields;
+(id)structName;


@end


#endif
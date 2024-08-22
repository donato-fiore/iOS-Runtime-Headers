// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMRESOURCE_H
#define EDAMRESOURCE_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMData.h"
#import "EDAMResourceAttributes.h"

@interface EDAMResource : FATObject

@property (retain, nonatomic) NSNumber *active; // ivar: _active
@property (retain, nonatomic) EDAMData *alternateData; // ivar: _alternateData
@property (retain, nonatomic) EDAMResourceAttributes *attributes; // ivar: _attributes
@property (retain, nonatomic) EDAMData *data; // ivar: _data
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSNumber *height; // ivar: _height
@property (retain, nonatomic) NSString *mime; // ivar: _mime
@property (retain, nonatomic) NSString *noteGuid; // ivar: _noteGuid
@property (retain, nonatomic) EDAMData *recognition; // ivar: _recognition
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSNumber *width; // ivar: _width


+(id)structFields;
+(id)structName;


@end


#endif
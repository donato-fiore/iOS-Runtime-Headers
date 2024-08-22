// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VISTREAMINGDETECTEDOBJECT_H
#define VISTREAMINGDETECTEDOBJECT_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface VIStreamingDetectedObject : NSObject

@property (readonly, copy, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, copy, nonatomic) NSString *domainKey; // ivar: _domainKey
@property (readonly, copy, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (readonly, nonatomic) CGRect normalizedBoundingBox; // ivar: _normalizedBoundingBox
@property (readonly, copy, nonatomic) NSUUID *objectUUID; // ivar: _objectUUID


-(id)initWithObjectUUID:(id)arg0 normalizedBoundingBox:(struct CGRect )arg1 domainKey:(id)arg2 glyphName:(id)arg3 displayLabel:(id)arg4 ;


@end


#endif
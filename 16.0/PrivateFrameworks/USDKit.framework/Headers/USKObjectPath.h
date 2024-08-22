// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USKOBJECTPATH_H
#define USKOBJECTPATH_H


#import <Foundation/Foundation.h>


@interface USKObjectPath : NSObject {
    SdfPath _path;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNodePath;
-(BOOL)isPropertyPath;
-(NSUInteger)hash;
-(id)init;
-(id)initWithSdfPath:(struct SdfPath )arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(id)nodePath;
-(id)pathByAppendingPropertyComponent:(id)arg0 ;
-(id)propertyName;
-(id)stringValue;
-(id)tokenValue;
-(struct SdfPath )path;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMEDIAINPUTCLUSTERINPUTINFO_H
#define MTRMEDIAINPUTCLUSTERINPUTINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRMediaInputClusterInputInfo : NSObject

@property (retain, nonatomic) NSString *descriptionString; // ivar: _descriptionString
@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (retain, nonatomic) NSNumber *inputType; // ivar: _inputType
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)init;


@end


#endif
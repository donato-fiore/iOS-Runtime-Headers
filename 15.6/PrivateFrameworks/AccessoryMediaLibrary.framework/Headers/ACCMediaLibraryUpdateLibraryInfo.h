// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACCMEDIALIBRARYUPDATELIBRARYINFO_H
#define ACCMEDIALIBRARYUPDATELIBRARYINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCMediaLibraryUpdateLibraryInfo : NSObject

@property (retain, nonatomic) NSString *mediaLibraryUID; // ivar: _mediaLibraryUID
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int type; // ivar: _type


-(BOOL)supportsSecureCoding;
-(id)copyDict;
-(id)description;
-(id)initWithDict:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 dict:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg0 name:(id)arg1 type:(int)arg2 ;
-(void)fillStruct:(struct ? *)arg0 ;


@end


#endif
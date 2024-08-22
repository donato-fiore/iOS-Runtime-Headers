// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADENTITYWRAPPER_H
#define CADENTITYWRAPPER_H

@class NSArray, CADObjectID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADEntityWrapper : NSObject <NSSecureCoding>

 {
    int _entityType;
    int _rowID;
    int _databaseID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCalEntity:(*void)arg0 ;
-(id)initWithCalEntity:(*void)arg0 loadedValues:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)loadedValues;
-(id)objectID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
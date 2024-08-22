// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OU3DOBJECT_H
#define OU3DOBJECT_H

@class NSDictionary, NSArray, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OU3DObject : NSObject <NSCopying, NSSecureCoding>

 {
    ? color;
}


@property (readonly, nonatomic) NSDictionary *boxesDict; // ivar: _boxesDict
@property ? color;
@property (nonatomic) float confidence; // ivar: confidence
@property (retain) NSArray *corners_history; // ivar: _corners_history
@property (retain, nonatomic) NSArray *corners_status; // ivar: corners_status
@property (retain) NSString *detection_source; // ivar: detection_source
@property ? dimensions;
@property (retain, nonatomic) NSArray *edges_status; // ivar: edges_status
@property (retain) NSArray *faces_status; // ivar: faces_status
@property (readonly, nonatomic) NSDictionary *groups; // ivar: _groups
@property (retain, nonatomic) NSUUID *identifier; // ivar: identifier
@property (retain, nonatomic) NSArray *logits; // ivar: logits
@property (retain) NSArray *refined_box_history; // ivar: _refined_box_history
@property (nonatomic) BOOL status; // ivar: status
@property (readonly, nonatomic) ? transform;
@property (retain, nonatomic) NSString *type; // ivar: type


-(BOOL)getDimension:(id)arg0 dim;
-(BOOL)getTransform:(id)arg0 transform:(struct ? *)arg1 ;
-(BOOL)hasBoxesDict:(id)arg0 ;
-(BOOL)runIsValidType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)addBoxesDict:(struct box3d *)arg0 forDictKey:(id)arg1 ;
-(void)addGroupId:(int)arg0 forGroupType:(id)arg1 ;
-(void)addRefinedBoxToHistory:(id)arg0 ;
-(void)clearGroupInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeBoxesDict:(id)arg0 ;


@end


#endif
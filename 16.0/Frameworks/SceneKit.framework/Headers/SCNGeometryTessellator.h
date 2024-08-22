// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNGEOMETRYTESSELLATOR_H
#define SCNGEOMETRYTESSELLATOR_H

@class NSMutableSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableSet *_clients;
    BOOL _adaptive;
    BOOL _screenSpace;
    float _maximumEdgeLength;
    float _edgeTessellationFactor;
    float _insideTessellationFactor;
    float _tessellationFactorScale;
    NSInteger _smoothingMode;
    NSUInteger _partitionMode;
}


@property (nonatomic, getter=isAdaptive) BOOL adaptive;
@property (nonatomic) CGFloat edgeTessellationFactor;
@property (nonatomic) CGFloat insideTessellationFactor;
@property (nonatomic) CGFloat maximumEdgeLength;
@property (nonatomic, getter=isScreenSpace) BOOL screenSpace;
@property (nonatomic) NSInteger smoothingMode;
@property (nonatomic) CGFloat tessellationFactorScale;
@property (nonatomic) NSUInteger tessellationPartitionMode;


+(BOOL)supportsSecureCoding;
-(BOOL)adaptive;
-(BOOL)screenSpace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )_tessellatorValueForGeometry:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)clientWillDie:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)tessellatorValueDidChange;
-(void)tessellatorValueDidChangeForClient:(id)arg0 ;


@end


#endif
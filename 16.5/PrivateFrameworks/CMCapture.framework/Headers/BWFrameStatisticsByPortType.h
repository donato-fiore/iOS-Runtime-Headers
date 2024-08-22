// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFRAMESTATISTICSBYPORTTYPE_H
#define BWFRAMESTATISTICSBYPORTTYPE_H

@class NSArray, NSDictionary;
@protocol NSFastEnumeration, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding>

 {
    NSArray *_portTypes;
    NSDictionary *_portTypeToFrameStatistics;
    *? _frameStatisticsStoragesForPortTypes;
    NSUInteger _frameCount;
}


@property (readonly, nonatomic) NSUInteger frameCount;
@property (readonly, nonatomic) NSArray *portTypes;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPortTypes:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)updateWithFrameMetadata:(id)arg0 updateFocusDistance:(BOOL)arg1 ;


@end


#endif
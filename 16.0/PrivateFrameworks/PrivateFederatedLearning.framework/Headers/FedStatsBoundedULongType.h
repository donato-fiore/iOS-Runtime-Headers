// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FEDSTATSBOUNDEDULONGTYPE_H
#define FEDSTATSBOUNDEDULONGTYPE_H

@class NSString;
@protocol FedStatsDataTypeProtocol;

#import <Foundation/Foundation.h>


@interface FedStatsBoundedULongType : NSObject <FedStatsDataTypeProtocol>



@property (nonatomic) NSUInteger bound; // ivar: _bound
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
+(id)gFedStatsOutOfBoundsNumber;
-(NSInteger)dataType;
-(NSUInteger)classCount;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)decodeFromOneHotVector:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToOneHotVector:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithBound:(NSUInteger)arg0 ;
-(id)sampleForIndex:(NSUInteger)arg0 ;


@end


#endif
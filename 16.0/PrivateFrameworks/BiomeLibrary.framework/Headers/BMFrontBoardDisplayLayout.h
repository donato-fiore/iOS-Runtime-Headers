// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMFRONTBOARDDISPLAYLAYOUT_H
#define BMFRONTBOARDDISPLAYLAYOUT_H

@class BMEventBase, NSDate, NSString, NSArray;
@protocol BMStoreData;



@interface BMFrontBoardDisplayLayout : BMEventBase <BMStoreData>

 {
    BOOL _hasRaw_absoluteTimestamp;
    CGFloat _raw_absoluteTimestamp;
}


@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displays; // ivar: _displays
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithAbsoluteTimestamp:(id)arg0 displays:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif
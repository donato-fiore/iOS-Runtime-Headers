// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXDATASERIESDESCRIPTOR_H
#define AXDATASERIESDESCRIPTOR_H

@class NSAttributedString, NSArray, NSString;
@protocol AXDictionaryRepresentable, NSCopying;

#import <Foundation/Foundation.h>


@interface AXDataSeriesDescriptor : NSObject <AXDictionaryRepresentable, NSCopying>



@property (copy, nonatomic) NSAttributedString *attributedName; // ivar: _attributedName
@property (copy, nonatomic) NSArray *dataPoints; // ivar: _dataPoints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isContinuous; // ivar: _isContinuous
@property (copy, nonatomic) NSString *meanValueDescription; // ivar: _meanValueDescription
@property (readonly, nonatomic) CGFloat meanYValue;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


-(id)_mutableArrayOfNSNullWithCount:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributedName:(id)arg0 isContinuous:(BOOL)arg1 dataPoints:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 isContinuous:(BOOL)arg1 dataPoints:(id)arg2 ;
-(void)_commonInitWithContinuous:(BOOL)arg0 dataPoints:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPVISIBLESECTIONHEADERFEEDBACK_H
#define _CPVISIBLESECTIONHEADERFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPVisibleSectionHeaderFeedback, NSSecureCoding;



@interface _CPVisibleSectionHeaderFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSectionHeaderFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) int headerType; // ivar: _headerType
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *sectionId; // ivar: _sectionId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif
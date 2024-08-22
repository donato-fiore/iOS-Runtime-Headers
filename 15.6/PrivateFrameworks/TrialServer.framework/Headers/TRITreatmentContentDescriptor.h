// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRITREATMENTCONTENTDESCRIPTOR_H
#define TRITREATMENTCONTENTDESCRIPTOR_H

@class TRIAppContainer, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRITreatmentContentDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) TRIAppContainer *container; // ivar: _container
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(id)descriptorWithTreatmentId:(id)arg0 container:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementContainer:(id)arg0 ;
-(id)copyWithReplacementTreatmentId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTreatmentId:(id)arg0 container:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPCHANGEDETAILS_H
#define TSWPCHANGEDETAILS_H

@class NSString, NSDate, TSDCommentStorage;
@protocol TSDAnnotationHosting, TSKModel;

#import <Foundation/Foundation.h>

#import "TSKAnnotationAuthor.h"
#import "TSWPChange.h"

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting>

 {
    NSString *mChangeString;
}


@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) TSWPChange *change; // ivar: _change
@property (readonly, nonatomic) NSString *changeTrackingString;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<TSKModel> *model; // ivar: model
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChangeDetails:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChange:(id)arg0 changeString:(id)arg1 ;
-(void)commitText:(id)arg0 ;
-(void)dealloc;


@end


#endif
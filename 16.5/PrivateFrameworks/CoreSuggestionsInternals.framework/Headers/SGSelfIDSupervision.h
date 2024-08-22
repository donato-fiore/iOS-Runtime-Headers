// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSELFIDSUPERVISION_H
#define SGSELFIDSUPERVISION_H


#import <Foundation/Foundation.h>


@interface SGSelfIDSupervision : NSObject

@property (nonatomic) _NSRange candidateNameRange; // ivar: _candidateNameRange
@property (nonatomic) BOOL isNegativeExample; // ivar: _isNegativeExample
@property (nonatomic) BOOL isPositiveExample; // ivar: _isPositiveExample


-(id)initWithMessage:(id)arg0 candidateName:(struct _NSRange )arg1 ;


@end


#endif
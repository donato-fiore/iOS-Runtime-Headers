// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCISSUEOVERRIDES_H
#define FCISSUEOVERRIDES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCIssueOverrides : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 issueDescription:(id)arg1 ;


@end


#endif
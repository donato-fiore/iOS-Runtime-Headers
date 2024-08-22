// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTGENERICDATASOURCESECTION_H
#define MTGENERICDATASOURCESECTION_H


#import <Foundation/Foundation.h>


@interface MTGenericDataSourceSection : NSObject {
    ? storedTitle;
    ? shouldIncludeSeeAllBlock;
}


@property (nonatomic, copy) id *shouldIncludeSeeAllBlock;


-(id)init;
-(id)initWithTitle:(id)arg0 ;


@end


#endif
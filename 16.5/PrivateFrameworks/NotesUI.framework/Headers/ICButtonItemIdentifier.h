// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBUTTONITEMIDENTIFIER_H
#define ICBUTTONITEMIDENTIFIER_H

@class NSString;
@protocol ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICButtonItemIdentifier : NSObject <ICItemIdentifier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 parentIdentifier:(id)arg1 ;


@end


#endif
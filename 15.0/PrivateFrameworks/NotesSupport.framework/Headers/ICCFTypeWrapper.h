// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCFTYPEWRAPPER_H
#define ICCFTYPEWRAPPER_H


#import <Foundation/Foundation.h>


@interface ICCFTypeWrapper : NSObject

@property (nonatomic) *void cfTypeRef; // ivar: _cfTypeRef


-(*void)ref;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCFTypeRef:(*void)arg0 ;
-(void)dealloc;


@end


#endif
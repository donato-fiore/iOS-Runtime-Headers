// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C3DBINDING_H
#define C3DBINDING_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface C3DBinding : NSObject

@property (retain, nonatomic) NSString *keyPathDst; // ivar: keyPathDst
@property (retain, nonatomic) NSString *keyPathSrc; // ivar: keyPathSrc
@property (retain, nonatomic) NSDictionary *options; // ivar: options
@property (retain, nonatomic) id *sourceObject; // ivar: sourceObject


-(void)dealloc;


@end


#endif
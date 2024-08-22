// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKSRCSETRULE_H
#define IKSRCSETRULE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "IKStyleMediaQuery.h"

@interface IKSrcSetRule : NSObject

@property (retain, nonatomic) NSString *descriptor; // ivar: _descriptor
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) IKStyleMediaQuery *mediaQuery; // ivar: _mediaQuery


-(id)initWithURL:(id)arg0 descriptor:(id)arg1 ;
-(void)_parseDescriptor:(id)arg0 ;
-(void)_parseMediaQueryDescriptor:(id)arg0 ;
-(void)_parseResolutionDescriptor:(id)arg0 ;


@end


#endif
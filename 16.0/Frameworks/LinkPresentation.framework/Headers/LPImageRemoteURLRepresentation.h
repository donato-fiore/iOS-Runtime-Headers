// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPIMAGEREMOTEURLREPRESENTATION_H
#define LPIMAGEREMOTEURLREPRESENTATION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface LPImageRemoteURLRepresentation : NSObject

@property (readonly, retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSUInteger scale; // ivar: _scale


-(id)initWithScale:(NSUInteger)arg0 URL:(id)arg1 ;


@end


#endif
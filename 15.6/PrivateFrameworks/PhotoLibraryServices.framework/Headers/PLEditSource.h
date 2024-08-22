// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLEDITSOURCE_H
#define PLEDITSOURCE_H

@class NUResolvedSource, NUSource;

#import <Foundation/Foundation.h>


@interface PLEditSource : NSObject

@property (readonly, nonatomic) BOOL isRAWSource;
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NUResolvedSource *resolvedSource; // ivar: _resolvedSource
@property (readonly, retain, nonatomic) NUSource *source;


-(id)description;
-(id)initWithResolvedSource:(id)arg0 mediaType:(NSInteger)arg1 ;
-(void)setIdentifier:(id)arg0 ;


@end


#endif
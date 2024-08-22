// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSEARCHRESULT_H
#define PKSEARCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKSearchResult : NSObject {
    ? episodes;
    ? shows;
}


@property (nonatomic, readonly) NSArray *episodes;
@property (nonatomic, readonly) NSArray *shows;


-(id)init;
-(id)initWithEpisodes:(id)arg0 shows:(id)arg1 ;


@end


#endif
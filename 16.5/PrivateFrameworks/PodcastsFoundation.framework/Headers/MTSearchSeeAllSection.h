// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSEARCHSEEALLSECTION_H
#define MTSEARCHSEEALLSECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTSearchSeeAllSection : NSObject {
    ? nextPage;
}


@property (nonatomic, readonly) NSInteger contentType; // ivar: contentType
@property (nonatomic, readonly) NSString *nextPage;


-(id)init;
-(id)initWithContentType:(NSInteger)arg0 nextPage:(id)arg1 ;


@end


#endif
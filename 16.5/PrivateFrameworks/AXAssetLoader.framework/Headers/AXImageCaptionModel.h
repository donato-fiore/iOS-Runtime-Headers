// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXIMAGECAPTIONMODEL_H
#define AXIMAGECAPTIONMODEL_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AXImageCaptionModel : NSObject {
    NSDictionary *_modelProperties;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *stage;
@property (readonly, nonatomic) NSString *version;


-(id)description;
-(id)initWithModelProperties:(id)arg0 ;


@end


#endif
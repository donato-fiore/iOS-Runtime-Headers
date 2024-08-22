// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKINBOXITEMSWIFT_H
#define CKINBOXITEMSWIFT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKInboxItemSwift : NSObject {
    ? identifier;
    ? title;
    ? subtitle;
    ? systemImage;
    ? _accessoryText;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 systemImage:(id)arg3 accessoryText:(id)arg4 ;
-(void)updateWithAccessoryText:(id)arg0 ;


@end


#endif
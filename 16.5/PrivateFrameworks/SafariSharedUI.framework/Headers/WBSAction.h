// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSACTION_H
#define WBSACTION_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface WBSAction : NSObject {
    id *_handler;
}


@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 handler:(id)arg3 ;
+(id)toggleSectionExpandedAction;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)makeUIAction;
-(void)performAction;


@end


#endif
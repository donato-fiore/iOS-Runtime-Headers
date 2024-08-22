// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSSYSTEMNOTESSNAPSHOT_H
#define SBSSYSTEMNOTESSNAPSHOT_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSSystemNotesSnapshot : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_imageDataByInterfaceStyle;
    NSMutableDictionary *_imageFormatByInterfaceStyle;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)imageFormatForStyle:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageDataForStyle:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setImageData:(id)arg0 format:(NSInteger)arg1 style:(NSInteger)arg2 ;


@end


#endif
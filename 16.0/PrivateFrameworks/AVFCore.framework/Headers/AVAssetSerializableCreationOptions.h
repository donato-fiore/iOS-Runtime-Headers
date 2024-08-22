// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETSERIALIZABLECREATIONOPTIONS_H
#define AVASSETSERIALIZABLECREATIONOPTIONS_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAssetSerializableCreationOptions : NSObject <NSSecureCoding>

 {
    NSDictionary *_creationOptions;
}




+(BOOL)supportsSecureCoding;
-(id)creationOptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCreationOptions:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
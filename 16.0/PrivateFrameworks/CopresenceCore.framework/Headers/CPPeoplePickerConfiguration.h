// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPPEOPLEPICKERCONFIGURATION_H
#define CPPEOPLEPICKERCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPPeoplePickerConfiguration : NSObject <NSSecureCoding>

 {
    ? shareSheetSessionID;
}


@property (nonatomic, readonly) NSInteger hash;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
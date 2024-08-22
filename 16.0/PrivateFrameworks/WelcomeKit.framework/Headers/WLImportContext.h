// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLIMPORTCONTEXT_H
#define WLIMPORTCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLImportContext : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger importCount; // ivar: _importCount
@property (nonatomic) NSUInteger importErrorCount; // ivar: _importErrorCount
@property (nonatomic) NSUInteger size; // ivar: _size


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
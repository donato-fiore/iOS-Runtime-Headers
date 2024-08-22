// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKBOOK_H
#define CRKBOOK_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKBook : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *author; // ivar: _author
@property (nonatomic) BOOL hasChapters; // ivar: _hasChapters
@property (copy, nonatomic) NSData *image; // ivar: _image
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSURL *webURL; // ivar: _webURL


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
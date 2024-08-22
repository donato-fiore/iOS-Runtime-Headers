// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSCONTACTDATA_H
#define BCSCONTACTDATA_H

@class CNContact, NSString;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSContactData : NSObject <BCSParsedDataPrivate>



@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
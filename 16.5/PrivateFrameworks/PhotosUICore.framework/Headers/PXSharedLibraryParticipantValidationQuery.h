// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYPARTICIPANTVALIDATIONQUERY_H
#define PXSHAREDLIBRARYPARTICIPANTVALIDATIONQUERY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXSharedLibraryParticipantValidationQuery : NSObject

@property (readonly, nonatomic) NSString *address; // ivar: _address
@property (nonatomic) BOOL isValid; // ivar: _isValid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithAddress:(id)arg0 ;


@end


#endif
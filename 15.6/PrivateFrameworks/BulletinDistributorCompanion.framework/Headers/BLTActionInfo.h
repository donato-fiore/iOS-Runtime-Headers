// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTACTIONINFO_H
#define BLTACTIONINFO_H

@class NSDictionary, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BLTActionInfo : NSObject <BSDescriptionProviding>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *publisherBulletinID; // ivar: _publisherBulletinID
@property (copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithActionType:(NSInteger)arg0 publisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3 context:(id)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
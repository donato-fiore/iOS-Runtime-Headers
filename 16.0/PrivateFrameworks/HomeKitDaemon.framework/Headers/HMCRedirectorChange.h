// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCREDIRECTORCHANGE_H
#define HMCREDIRECTORCHANGE_H

@class HMFObject, NSString, NSSet;



@interface HMCRedirectorChange : HMFObject

@property (readonly) NSString *author; // ivar: _author
@property (readonly) NSString *context; // ivar: _context
@property (readonly) NSSet *deletes; // ivar: _deletes
@property (readonly) NSSet *inserts; // ivar: _inserts
@property (readonly) NSSet *updates; // ivar: _updates


-(id)description;
-(id)descriptionLines;
-(void)dumpForLoggingWithPrefix:(id)arg0 logType:(unsigned char)arg1 ;


@end


#endif
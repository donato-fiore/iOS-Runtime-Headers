// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOWNEDDICTIONARYPROXY_H
#define NSOWNEDDICTIONARYPROXY_H

@class NSDictionary;



@interface NSOwnedDictionaryProxy : NSDictionary {
    id *_owner;
}




-(NSUInteger)count;
-(id)initWithOwner:(id)arg0 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)release;
-(void)superRelease;


@end


#endif